This is what generated the message:

#!/usr/bin/env python

import base64

flag = "CTF_flag(But what's in a base, really?)"

for x in range(17):
    flag = base64.b64encode(flag)

print(flag)


Potential means to solution:
#!/bin/bash
export aaa=$(cat message.txt)
for asdf in {1..100}; do
  export aaa=$(echo $aaa | base64 -d);
  echo $aaa;
  read -p "Press enter to continue";
done
