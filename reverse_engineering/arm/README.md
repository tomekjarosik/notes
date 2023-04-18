Start different platform/architecture with docker like this:


```
docker run -v /home/tjarosik/src/:/workspace -ti --platform linux/arm64/v8 ubuntu:18.04 bas
```