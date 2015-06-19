IMO, This feature might create some performance drawback for a site like 
weather.com having such a high traffic. I used user object to save this information 
which get cached in the drupal system which might give some performance advantage 
but still we are querying the database to get the cached copy. it is fine with 
the site having moderate traffic but web sites like weather.com having huge amount of 
simultaneous access will create a lot of server load even with this little feature.

IMO, While deciding any feature for such high traffic web site one should be very particular
and should think about the most absolute features which can not be avoided.    