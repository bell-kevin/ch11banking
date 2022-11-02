# ch11banking

In this project, simulate a bank where a user has a checking account and can make withdrawals and deposits to that account. Create a base Account class, which has instance variables for the balance and the name of the customer, and methods to (1) withdraw a sum from the balance (if there is enough in the balance for that withdrawal), (2) deposit a sum into the balance, and (3) display the balance. Add a derived class for a checking account, which differs from the base Account by including a fee for every transaction. For a withdrawal, the fee is also subtracted from the balance (after checking that there is enough in the balance for both amounts to be removed); for a deposit, the fee is subtracted and the deposit is added to the balance. 

The output should look like this:

![ch11-banking.PNG](https://github.com/bell-kevin/ch11banking/blob/main/ch11banking/bank.PNG)

The checking account starts with a balance of $1000 and a fee of $2.50. Ask the user for a name and echo that name with a display of the initial account settings. In a loop, ask if the user wants to withdraw or deposit, and the amount for that transaction. Include some error handling for selections that are not correct (using "X" above), and for trying to withdraw more than is available in the account. The user can ask for as many transaction as they want, until they enter the sentinel for the loop.

Run the project and enter at least 1 good withdrawal, 1 withdrawal that is more than the balance, 1 deposit, and 1 incorrect selection, to test out all the functionality. 

Take a screenshot of the results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
