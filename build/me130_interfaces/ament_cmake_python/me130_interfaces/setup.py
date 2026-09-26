from setuptools import find_packages
from setuptools import setup

setup(
    name='me130_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('me130_interfaces', 'me130_interfaces.*')),
)
