# ZPR-BioWeb-project
### *[ZPR] Optional task with the usage of BioWeb framework.*

Prime number
----------------------------------------------------------------------
Author of the modification: *shakandrew*

Application has been made using [BioWeb framefork](http://bioweb.sourceforge.net/en/index.html), made by dr. R. Nowak.


What is it?
-----------
Simple application to check numbers for being prime.

App uses **Python3** / **C++** / **JavaScript**:

* Django 2.0.1
* Boost 1.66
* AngularJS 1.6.7

How to install:
---------------
First of all you need installed python3.

1. Linux:
  1. Also install : *lighttpd, boost, boost-libs, virtualenv, pip.*
  2. In the project forder:

    ```bash
    virtualenv -p python3 venv
    ```

  3. In the same folder do:

    ```bash
    source venv/bin/activate
    pip install -r requirements.txt
    ```

  4. To build the project run `scons`

    * It's possible, that there mistakes will appear. Please check file `./primeness/SConscript`. Maybe you need to change `LIBPATH` and `CPPPATH`. It relates on your python version.
2. Windows

  For Windows it's good to download example from frameforks page and look for `OPTIONAL_ENV_SETUP` (Common instruction for BioWeb framefork).

Test that Python.Boost built library works correctly.
-----------------------------------------------------
Open `build_web/primeness` run `python` :
```python3
import primeness

#Add argument (our number) as string
print(primeness.checkForPrime("10"))
```

How to run
----------
To run the serwer, run:

```bash
python build_web/manage.py runserver
```

Or

```bash
python build_web/manage.py runserver WEB_CLIENT_HOST:WEB_CLIENT_PORT
```

For example

```bash
python build_web/manage.py runserver 127.0.0.1:8000
```

(Maybe using Linux you will need sudo)

Open your lovest web-browser, Chromium for example and type into address line:

`WEB_CLIENT_HOST:WEB_CLIENT_PORT` (in out example: `127.0.0.1:8000`)

P.S.
----
You can change files in build_web and run serwer. But if you are changing sources in `./primeness/` or `./web/` don't forget to run scons.
