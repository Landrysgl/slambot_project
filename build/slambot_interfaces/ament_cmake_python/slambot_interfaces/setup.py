from setuptools import find_packages
from setuptools import setup

setup(
    name='slambot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('slambot_interfaces', 'slambot_interfaces.*')),
)
