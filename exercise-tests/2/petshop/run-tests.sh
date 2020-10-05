#!/bin/bash

dir=$(dirname $0)

echo "Oscar,Cat,12
Steve,Dog,7
Fred,Snail,3
Janus,Dog,4
Troy,Dog,2
Larry,Ant,1
Polly,Cat,15
Erik,Cat,14" > animals.txt

TOTAL=6
SUM=0

for I in petshop1.sh  petshop2.sh  petshop3.sh  petshop4.sh  petshop5.sh  petshop6.sh ; do
  if [[ ! -e $I ]] ; then
    echo "File $I doesn't exist"
    continue
  fi
  if [[ $(head -n 1 $I) != "#!/bin/bash" ]] ; then
    echo "A bashscript must start with: #!/bin/bash"
    echo "The next time you won't receive any marks if not done properly!"
  fi

  #chmod 755 $I
  bash $dir/$I > /tmp/expected.txt
  ./$I > /tmp/provided.txt

  diff -w /tmp/expected.txt /tmp/provided.txt > /dev/null
  if [[ $? != 0 ]] ; then
    echo "Sorting $I doesn't produce the required output"
  else
    SUM=$((SUM + 1))
    echo "Sorting $I works!"
  fi
done

echo "$SUM/$TOTAL marks"
