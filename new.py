import pandas as pd

dfa=pd.DataFrame({
  'Crime ID':  [102,108,109,287],
   'Name': ['Mittal', 'Arjun', 'Galib', 'Harsh'],
   'Profession': ['Mochi', 'Redi Wala', 'Chor', 'Laundiya Baaz'],
   'Crime': ['Nasha', 'katal', 'Katal', 'Ladies Toilet']})
dfa.to_csv("Case 1.csv",index= False)
df1=pd.read_csv("Case 1.csv")
dfb=pd.DataFrame({
  'Crime ID':  [102,227,108,287],
   'Name': ['Mittal', 'Allu', 'Sameer', 'Harsh'],
   'Profession': ['Mochi', 'Don', 'Atankwaadi', 'Laundiya Baaz'],
   'Abc': ['Nasha', 'Nasha', 'Atankwaadi', 'Ladies Toilet']})
dfb.to_csv("Case 2.csv", index=False)
df2=pd.read_csv("Case 2.csv")

merged_df = pd.merge(df1, df2, left_index=True, right_index=True, how='outer', suffixes=('_df1', '_df2'))
print(merged_df)

common_columns = df1.columns.intersection(df2.columns)

Remarks=[]
temp1=0
temp2=0
# for i in (common_columns):
    # if(i == common_columns[1]):
    #     break
i = common_columns[0]
for j in (dfa[i]):
    temp2 = 0
    for k in (dfb[i]):
        com_val=0
        if(j!=k):
            for l in (common_columns):
                if(dfa[l][temp1]==dfb[l][temp2]):
                    com_val+=1                 
                    if(com_val==len(common_columns)):
                        #print(dfa[l][temp1],dfb[l][temp2])
                        Remarks.append("Perfect Match")
                        #,df[df[j] == j].index[0], df[df[k] == j].index[0]
                        #Remarks[i]=Remarks+{i: 'Perfect match'}    
        temp2+=1
    temp1+=1
print(Remarks)