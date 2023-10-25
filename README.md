# BILISCANA
A semi auto clawer tool for Bilibili.
## DO NOT USE IN REAL PROJECT
Although the tool can be run with right configuration of dependencies and some tweaking of setting in the api-robot.py file.   BUT, this version is NOT YET READY FOR A REAL PROJECT due to lack of following features:
 - Anti-clawer system recovery
 - Support of CLI arguments
 - Recovery from accidential stop or exits
 - Safely exits methods. 

The tool itself has been tested for 20 videos, but it's not ready for use. Stay tuned for the first stable release version.  
Also aware that the HTML methods might malfunction due to the site change their front end design at any moment without notification. Only treat those code as a reference if you want to redevelop the tool.

## Features

 1. HTML based and API based comments clawing
 2. JSON file dump that support data reuse
 3. User, Comment all-in-one clawing
## Deployment 
 1. Clone the code to local 
 2. Intall Poetry, MongoDB
 3. Create a MongoDB database
 4. Run poetry with following commands to prepare the environment 
 5. (Optional) Install the web-driver for your browser
 6. Login to your Bilibili account with F12 Web Developer Tools enable, extract the login cookie, put it into the cookie variable
 7. Put the list of BV into the list 
 8. Put MongoDB connection info into the DB variable
 9. Run the code and wait for the clawer done his job!

## Knowing issiue
Please be aware that JSON dump feature might not be work if volume of comments is bigger than 10,000. By default, the tool will use database to storage data. This limitation is majorly due to the JSON phraser can not process that amount of data.
## Limitation
The tool do have some limitation for now either is not implemented in the code yet, limited by the site, or just for security reason.
The tool do not contain a function that allow you to enter a BV id expression to claw videos without manual input. This is to make sure that the tool will only be use with videos you know that need to claw, not effecting others. Also conversion of AVID to BVID is not include in the tool since AVID contain only numbers, it's a knowing vulnerability for clawing videos without human control.


## TODO
- Support of CLI arguments, to get rid off the crazy configuration process.
- Rewirte, reconstructed with different languages to improve stability and performance 
- Sparte the Clawer, Slover, Data keeper code for easier development and expansion.
- Slove protential menory leaking from not handeling task data in right way or over trust the GC
- Support of parallel clawing
- Ignite Clawing mode, automatically trace mentioned video and user profiles
- Fox Hunter Mode, compare comments similarity and style on fly or offline. Useful for find out bots or connections between accounts.
- Remote cooperation, true solution for anti clawer system
## Disclamer
The tool is not a Bilibili official tool.
The data is storage with nessary conversion for human reading, therefore, it cannot use for AS IT purpose clawing.
The tool don't provide insights of comments on any view, this is a data gathering tool, not a auto analysis tool.
The tool do not have or only contain parts of any tested, certified information protection, encryption methods, system, modules. I, the developer do not graintee your information's security.
Bilibili is the trademark of Bilibili Inc.
Python is the open source project of Python foundation.
Poetry is a third party envoiement management system for Python, developed by python-poetry.


