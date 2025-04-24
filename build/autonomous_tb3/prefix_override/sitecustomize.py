import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/li/Work/Nav2_simple/install/autonomous_tb3'
