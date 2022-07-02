
echo "hello world"

test_func() {
    for arg in $@
    do
	echo $arg
    done
}

test_func hello world nihao
