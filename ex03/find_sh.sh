find . -name '*.sh' -print | sed 's/\.sh//' | rev | cut -d / -f 1 | rev
