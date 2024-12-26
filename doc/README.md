# RLFight-Engine Docs

## Installation & usage

These docs are generated with `sphinx` (https://www.sphinx-doc.org/en/master/index.html). If you need to generate the docs locally for development purposes, create a python virtual environment and then install requirements with `pip install -r requirements.txt` (tested with python 3.12).

## Changing or adding new dependencies

Pip-tools is used to pin the documentation dependencies. See https://github.com/jazzband/pip-tools for usage information.

```bash
python -m piptools compile -o requirements.txt requirements.in
```
