ldapsearch '(uid=z*)' | grep -i 'cn: z' | sort -d -r | sed 's/cn: //'
