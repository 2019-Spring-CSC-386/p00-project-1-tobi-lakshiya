# P00: Water Checker

**Author(s)**: Tobi & Lakshiya

**Google Document**: https://docs.google.com/document/d/1iizkFOpGYiZkVsFdw9JWU4q7ni9mdWjg4EPIaNEp_68/edit?usp=sharing
---
## Purpose
*Is make sure that the person drinks enough water every day*

Most people don't drink enough water every day. And setting a reminder on a phone is not too effective because you can just ignore it or lie about how much water you drank. We will solve this problem by creating an embedded system that checks the weight of the water bottle every few hours to make sure you have emptied the water bottle.

- Design: we will have a two liter bottle in the moring and it will measure the weight throughout the day

## Initial Design Plan
*You'll complete this section as part of Milestone 1, and update regularly.*

Outline the product you're creating:
Hardware Componant
- List the hardware components you'll be using, and how they interact. 
  This is an appropriate place for a diagram. An EXCELLENT resource 
  for creating diagrams is the [Fritzing website](http://fritzing.org/home/ "Fritzing website")
  (images/Schematic.png) (images/BreadBoard.png)
  
  - weght sensor: will be connected to the arduino through bread board and checks the water bottle's weight 
  - sound output device: This device will sound every few hours to let the user know to drink water and will be connected to adruino through bread board
  - arduino: will house the code and this will receive input from weght sensor and cause sound device to make noise
  - bread board: this is where everything will be connected 
  - amplifire HX711 board: amplifys the changes in the electrical risistance from the weight sensor so it can be read by the arduino.

- List all of the known parts in the code you'll be creating.
  - we will have a function measure the time during the day from 7am-7pm 
  - we will have a function rings a notification alarm every 4 hours and call another function to check the weight
  - we will have a function that takes the input from the wieght sensor and checks weight and output based on the mesure ments. It will check if the current weight is less that the weight of the privieous reading.

**Sample image**:

![A sample image to show how to add one to a repo](images/example.png "A sample image. This is the text that appears.")

**NOTE**: Your initial design plan may not fully reflect your final product,
as projects evolve over time.

## Files
*You'll complete this section as part of Milestone 1.*

List every file in your repository, and briefly summarize each file's purpose in a sentence.

## Summary
*You'll complete this part at the end of the project.*

Provide a brief summary description of the design and implementation,
including how much your initial design plan evolved, the final result
you achieved and the amount of time you spent as a programmer in
accomplishing these results, including any challenges overcome and
innovations that were not specifically required by the assignment.
This section should be no more than three paragraphs.

## Instructions
Explain how to use your product. 
This section should THOROUGHLY describe its usage (i.e., more than just "Push start").

## Errors and Constraints
*You'll complete this part at the end of the project.*

Every program has bugs. Use this section to create a bullet list of
all known errors and deficiencies that remain in your product. 
Also, list any constraints that must exist for your product to work 
(e.g., Only works in low light situations).

## Reflection
*You'll complete this part at the end of the project.*

Write 2 - 4 paragraphs on your reactions to the final project. 
Your reflection should be thoughtful and reflective. 
It is NOT a report about WHAT you did. 
Instead, it's a look back at what you learned by doing this project.
It should be critical of shortcomings (yours, as well as the instructors/assignments) 
as well as celebratory of what was achieved.

## References
*Start this section at the beginning of the project, and update it throughout.*

https://tutorials-raspberrypi.com/digital-raspberry-pi-scale-weight-sensor-hx711/
https://www.brainy-bits.com/load-cell-and-hx711-with-arduino/

Throughout this project, you'll be used outside resources.
Reference ALL ideas or code which are not your own, and describe and
how you integrated the ideas or code into your program. This includes
online sources, people who have helped you, and any other resources that
are not solely your own contribution. Lastly, include ALL resources you
looked at, not just the ones you ended up using directly.

## Final Self-Evaluations
*You'll complete this part at the end of the project. 
Assign points to each team member in each category, based on their contribution to the team. 
The sum of all member's points in each category cannot exceed 10. 
For example, for Coding, Partner 1 could get 7 points, and Partner 2 gets 3 points. 
You can't give both people 6 points each though, as the sum exceeds 10.

### Ideation, Brainstorming, Design:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Code creation: 

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Documentation creation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*

### Teamwork & Participation:

*Partner 1 (replace this with your name): 0-10*

*Partner 2 (replace this with your name): 0-10*


---
**A Note from Scott to You**

While I expect this project to have issues, one
thing to keep in mind is HAVE FUN with it! Create a product that
expresses your personal interests. Break up the writing so it’s not so burdensome.
We will have a live demo sessions at the end of the project to celebrate your accomplishments.
