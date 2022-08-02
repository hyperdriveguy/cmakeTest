<img src=".cbc/CBClogo.png" alt="Computing Boot Camp Logo" width="100"/>

# BYU Computing Bootcamp - CMake Tests

So you believe that you've mastered CMake, do you? Well, it's time to prove it! Upon completion of this test, you will recieve
the "CMake Knowledge Badge" from the BYU Computing Bootcamp to attest of your knowledge and expertise. Here's a link to the badge on Badgr so that you can go admire it: [Click here!](https://badgr.com/public/badges/dHgXDlBtTCa1Re-LwGo5pw)

<img src="https://media.badgr.com/uploads/badges/060b773b-bd5c-48b0-82e3-68af87eabf0f.png" alt="CMake Badge" width="200"/>

While completing this test, you are not allowed to copy paste code from another source. If you are unable to complete the test this way, go back and practice some more! We don't do this because we're mean, but rather because we can't attest to your knowledge unless you can do it on your own. This means that when you do complete the test, you will actually be an expert in CMake, rather than someone who knows how to copy and paste from the Internet.

Don't worry if the test gives you trouble, you can take it as many times as you'd like. The repeated trials will help you solidify the concepts into your brain, training yourself to remember the most important parts of CMake.

## Setup

First, fork the repository to your user by pressing the fork button in the upper right hand corner. Then, you can clone the repository onto your computer with:
```
git clone https://github.com/<your_username>/cmakeTest.git
```
You are now ready to start coding!
Start out by entering your email into the 'email.txt' file, so that we can properly give you your badge when you pass the test.

## Problem 1 

Modify problem1/CMakeLists.txt to compile and run the program found in main.c

It should be very simple and should use the following CMake functions:

1. include_directories()
2. add_executable()

Finally, the name of the executable needs to be "perform" or you will get an error!

This problem should help you see that CMake can be used to compile and execute bigger projects in a fast and easy way.

## Problem 2 

Use the problem2/apps/CMakeLists.txt file to create the "hello" executable and link to it the "myActionLib".

Use the problem2/include/CMakeLists.txt file to create the "myActionLib" and "myMessageLib" libraries. Link "myMessageLib" to "myActionLib". Include the respective directory for both libraries. Do not use PUBLIC in this file.

For problem2/CMakeLists.txt make sure to use the following CMake functions:

1. cmake_minimum_required()
2. project()
3. add_subdirectory()

Remember that the name of the executable needs to be "hello" or you will get an error!

This problem should help you see that CMake can be used in a more detailed way to compile and run projects according to your desires. 

## Submitting

Once you've completed the problems, add, commit, and push your changes to the branch:
```
git add .
git commit -m <message>
git push origin main
```
Make sure that you put your email into the 'email.txt' file, or you won't recieve your badge if you pass.

Then, visit the repository on Github and open a pull request with our repository here,
which is all you will need to do to pass-off your code. You won't need to merge your
PR with the main repository or anything else. There is a workflow on the main
repository that should run every 10 minutes: it will check your code, and close the
pull request when its finished. So after a bit, check the Pull Request to see the results. 
It will have comments describing which parts of the test you passed.

### If you passed...
Congradulations! You've passed the CMake test, and you have been certified
by the BYU Computing BootCamp to have "CMake" Knowledge. You should recieve an email with your badge contained inside. The
Pull Request has a comment with the email that the badge was sent to, so if you didn't recieve it, check to make sure
you entered your email correctly. Show off the "CMake" badge to potential employers, or use it with other Computing BootCamp 
badges to gain the "Software Development Knowledge" badge!

### If you didn't pass...
Don't worry, you'll get there eventually! You probably just have a small mistake. You might have deleted or renamed 
one of the passoff files, forgot to implement a function, or missed a bug in your code! Whatever it is, you'll have to make a few 
changes to your code and try again. Check in the Pull Request to see which part of the passoff you failed at, and then try to
duplicate the results on your local machine (by looking at the pass-off workflow files). Compare your output on your machine to
the intended behaviour found in this README.md to find out what went wrong. When you think you're ready to resubmit, push the changes
back onto your repository, and open a new Pull Request. The workflow will check it again when it runs.

## Support

Need support, have questions, or think you've found a bug in the repository? Think you should have recieved a badge when
you didn't, or that the checks are potentially broken? Reach out to byucomputingbootcamptests@gmail.com, or open an issue here on
GitHub.
