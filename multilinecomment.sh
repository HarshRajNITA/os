#!/bin/bash

: << 'EOF'
This is a multiline comment.
You can write multiple lines here.
The shell will ignore everything between : << 'EOF' and EOF.
Use this for long explanations or notes in your script.
EOF

echo "This is a normal command."
