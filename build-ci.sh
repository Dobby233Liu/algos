#!/usr/bin/env bash

ls */Makefile | while read; do
echo ::group::${REPLY%/*}
/usr/bin/env make -C ${REPLY%/*} || die=true
echo ::endgroup::
done

if [ $die ]
then
exit -1
fi
