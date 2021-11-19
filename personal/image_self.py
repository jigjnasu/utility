import os
import sys
import time
from os import listdir
from os.path import isfile, join

def get_datetime(path):
    dt = time.strftime('%d_%m_%Y_%H_%M_%S', time.localtime(os.stat(path).st_mtime))
    ns = int(((os.stat(path).st_mtime_ns % 1000000000))/ 1000)
    return '{}_{:06d}'.format(dt, ns)

def convert(path):
    onlyfiles = [f for f in listdir(path) if isfile(join(path, f))]
    for f in onlyfiles:
        p = path + '/' + f
        ext = f.split('.')[1]
        fn = get_datetime(path + '/' + f)
        nn = path + '/' + fn + '.' + ext
        os.rename(p, nn)
        print('{} -> {}'.format(p, nn))

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print('Please provide a path for image name conversion')
        exit(0)
    else:
        convert(sys.argv[1])