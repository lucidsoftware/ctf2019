You will need to learn to filter out traffic from a packet capture to find a string that was passed via HTTP.

1) Open the network.pcap file in Wireshark.
2) In the filter bar, type: http
3) Look for the packet HTTP POST packet that was captured.
4) Examine the content of the packet to find the unencrypted password: flag[InsecureWebForm]

