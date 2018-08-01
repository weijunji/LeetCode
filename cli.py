import os
title = input('Title: ')
while os.path.exists(title):
    title = input('Path exist, please use another title: ')

os.mkdir(title)
os.chdir(title)
f = open('my.cpp', 'w')
f.close()

reveal = input('Create reveal file? (Y/N): ')
if reveal == 'Y' or reveal == 'y':
	f = open('reveal.cpp', 'w')
	f.close()

f = open('readme.md', 'w')
f.write('# {}\n'.format(title))
f.write('[Chinese](https://leetcode-cn.com/problems/{}/description/)\n\n'.format(title))
f.write('[English](https://leetcode.com/problems/{}/description/)\n\n'.format(title))
f.close()
print('Create successfully')
