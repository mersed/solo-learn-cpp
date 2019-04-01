#!/bin/bash

if [ -z "$1" ]
  then
    echo "Search term is missing.";
    exit;
fi

SEARCH_TERM="$1";

GREP_OUTPUT=$(grep -F "${SEARCH_TERM}" -r);
echo "$GREP_OUTPUT";
echo "----------------------------";


GREP_OUTPUT_PARSED=${GREP_OUTPUT////#}
IFS="#" read -ra arr <<< "$GREP_OUTPUT_PARSED"
CPP_DIR=${arr[0]};

cd "${CPP_DIR}";
./main