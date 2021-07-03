#!/usr/bin/env bash

ls */Makefile | while read; do
echo ::group::${REPLY%/*}
/usr/bin/env make -C ${REPLY%/*}
echo ::endgroup::
done
