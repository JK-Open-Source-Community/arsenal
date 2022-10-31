import shutil
import os
import pandas as pd

df = pd.read_csv('Certificates.csv', usecols = ["Tfno.","Reference"])
df.dropna(inplace=True)
#df = df.head(10) # test

def ftrans(df,i):
    flag = [True,None]
    try:
        os.mkdir(os.path.join(os.getcwd(),df["Tfno."][i]))
    except Exception as e:
        print(e)
    try:
        source = os.path.join(os.getcwd(),'Data Set {}.pdf'.format(i+1))
        fname = df["Reference"][i]+".pdf"
        fname = "".join(fname.split('/')[-2:])
        destination = os.path.join(*[os.getcwd(),df["Tfno."][i],fname])
        dest = shutil.copy(source,destination)
    except:
        flag[0] = False
        flag[1] = df.iloc[i]
    return flag


fails = df[0:0]
for i in df.index:
    flags = ftrans(df,i)
    if flags[0]:
        continue
    else:
        fails = fails.append(flags[1])
fails.to_csv('failed.csv')