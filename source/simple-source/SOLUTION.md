The solution to this challenge is to understand what the PHP function is doing.

If you notice you are given the final encodedsecret that is being submitted as a part of the POST request. All you have to do to solve this challenge is to reverse the steps in the encodeSecret function.

1. hex2bin(3d3d41566f64554d533956524f424452664e5654424a315242464452) = ==AVodUMS9VROBDRfNVTBJ1RBFDR 
2. strrev(==AVodUMS9VROBDRfNVTBJ1RBFDR) =  RDFBR1JBTVNfRDBORV9SMUdoVA==
3. base64_decode(RDFBR1JBTVNfRDBORV9SMUdoVA==) = D1AGRAMS_D0NE_R1GhT

Final Flag to be Submitted = D1AGRAMS_D0NE_R1GhT