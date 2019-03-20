#!/bin/bash

function questionOne {
    echo "You can drop me from the tallest building and I'll be fine, but if you drop me in water I die.  What am I?"
    read -e -t 10 answer

    if [[ $? == 0 ]]; then
      if [[ ${answer} =~ "paper" ]]; then
        echo "Correct.";
        questionTwo
      else
        incorrectAnswer
      fi
    else
      echo "Too slow!"
    fi
}

function questionTwo {
    echo "What kind of attack involves injecting malicious code into a website to be executed client-side?"
    read -e -t 10 answer

    if [[ $? == 0 ]]; then
      if [[ ${answer} =~ "cross site scripting" || ${answer} =~ "xss" ]]; then
        echo "Correct.";
        questionThree
      else
        incorrectAnswer
      fi
    else
      echo "Too slow!"
    fi
}

function questionThree {
    echo "Who is the modern day warrior? https://www.youtube.com/watch?v=jvbyMPvGDhs"
    read -e -t 10 answer

    if [[ $? == 0 ]]; then
      if [[ ${answer} =~ "tom sawyer" ]]; then
        echo "Correct.";
        ctfFlag
      else
        incorrectAnswer
      fi
    else
      echo "Too slow!"
    fi
}

function incorrectAnswer {
    echo "Incorrect Answer.  Better luck next time!"
}

function ctfFlag {
    echo "Congratulations!  ZmxhZ3t5b3VTaG91bGRudFVzZVRlbG5ldH0K"
}


questionOne
