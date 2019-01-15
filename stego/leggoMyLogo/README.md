
1. Use a hex editor (like hexeditor, Bless, or Wireshark) to view the hex code of the image.

2. At the end of the file, you find the MD5 sum: 54772205a6b4bcf77a96039c41770d80

3. Use the website https://www.md5online.org/md5-decrypt.html to find the value: workatlucid

4. A file is hidden within the jpg file.  This can be extracted using steghide: %steghide extract -sf lucid-logo.jpg

5. The password is the string found in #3. This will export a file called dream.txt

6. The contents of dream.txt has a string which is a base64 encrypted string.

7. Use %cat dream.txt | base64 -d to get the string: flag[StegoRules]
