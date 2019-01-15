This is what generated the message:

#!/usr/bin/env python

import base64

flag = "CTF_flag(But what's in a base, really?)"

for x in range(17):
    flag = base64.b64encode(flag)

print(flag)