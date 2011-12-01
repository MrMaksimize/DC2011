disable the following:
	cdn
	boost
	uc_ssl

else{FOOBAR};

remove cache folder

1. move stuff from themes - css
2. move stuff from themes images
3. move stuff from themes -js
4. download mobile tools
5. move feature
6. enable
	drush en dc_2011_mobile

	drush fr -y dc_2011_mobile
7. go the context admin screen - for each context that has a mobile counterpart do the following:

a.  click 'require all conditions checkbox'
b. add a condition 'context for mobile devices'
c. when it asks you which devies to pick, click the 'desktop' box



QA: things to look for
####If you're testing it in browser, append the ?device=mobile after each path you test, for mt to recognize mobile context
page should not be moving horizontally 
 rotation and rotation back  
top bar should disappear upon load  
text size consistency
general ui  

####Responsive
The site is not meant to be fully responsive, but depends heavily on server side context.  However, if you're up for it, run through the site in smaller browser size without ?device=mobile  
Resize back and forth to make sure that proper changes happen in each direction (full and mobile) size change.  


###Enabling multiple users pictures on sessions
* enable views_customfield
* edit the sessions view
* exclude user:picture from display
* right below user picture add Global -> phpcode
* insert code into the field from here: http://pastebin.com/YhJHAfJ4
* also under semantic views, give phpcode the class pictures
