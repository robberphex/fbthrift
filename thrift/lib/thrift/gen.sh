for i in *.thrift; do
  /opt/homebrew/Cellar/fbthrift/2024.11.18.00/bin/thrift1 --gen mstch_java -I ../../../ -out ../../../thrift/lib/java/runtime/src/main/java/ $i
done

for i in ../../../thrift/conformance/if/*.thrift; do
  /opt/homebrew/Cellar/fbthrift/2024.11.18.00/bin/thrift1 --gen mstch_java -I ../../../ -out ../../../thrift/lib/java/runtime/src/main/java/ $i
done

for i in ../../../thrift/lib/java/test-if/*.thrift; do
  /opt/homebrew/Cellar/fbthrift/2024.11.18.00/bin/thrift1 --gen mstch_java -I ../../../ -out ../../../thrift/lib/java/runtime/src/test/java/ $i
done

for i in ../../../thrift/lib/java/test-common/*.thrift; do
  /opt/homebrew/Cellar/fbthrift/2024.11.18.00/bin/thrift1 --gen mstch_java -I ../../../ -out ../../../thrift/lib/java/test/src/main/java/ $i
done