# 判断str1 是否 包含 str2
str1="haha"
str2="hah"
if [[ "$str1" =~ "$str2" ]]
then
    echo 'include'
else
    echo 'not include'
fi
