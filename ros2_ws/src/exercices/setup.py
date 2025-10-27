from setuptools import find_packages, setup

package_name = 'exercices'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='student@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
                'publisher_ex1 = exercices.publisher_ex1:main',
                'publisher_ex2 = exercices.publisher_ex2:main',
                'publisher_ex3 = exercices.publisher_ex3:main',
                'subscriber_ex1 = exercices.subscriber_ex1:main',
                'subscriber_ex2 = exercices.subscriber_ex2:main',
                'subscriber_ex3 = exercices.subscriber_ex3:main',
        ],
    },
)
