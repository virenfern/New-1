my_playlist1=[]
my_playlist2=[]
playlist=[]
vow=[]
cons=[]
n=int(input("Enter the number of songs for playlist two playlists:"))
for  i in range(n):
  song1=input("Enter the songs for playlist 1:").title()
  my_playlist1.append(song1)
  song2=input("Enter the songs for playlist2:").title()
  my_playlist2.append(song2)
playlist=my_playlist1+my_playlist2
for j in range(n):
   m=my_playlist1[j]
   p=my_playlist2[j]
   if(m!=p):
    continue
   else:
    playlist.remove(m)
print("The playlist is:",playlist)
x="AEIOUaeiou"
for i in range(n):
  if(x in playlist[i]):
   vow.append(playlist[i])
  else:
   cons.append(playlist[i])
print("The playlist with vowels:",vow)
print("The playlist with consonants:",cons)

           




