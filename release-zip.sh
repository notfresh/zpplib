source VERSION
echo "version is $zpplibVersion"
zip -r zpplib-release-${zpplibVersion}.zip .  \
 -x "bazel-zpplib/*"  -x "bazel-bin/*" -x "bazel-out/*" -x ".git/*" \
 -x "bazel-testlogs/*"

