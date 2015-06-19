IMO, This feature might create some performance drawback for a site like 
weather.com having such a high traffic. I used user object to save this information which get cached in the drupal system which might give some performance advantage.

But still we are querying the database to get the cached copy. it is fine with 
the site having moderate traffic but web sites like weather.com having huge amount of simultaneous access will create a lot of server load even with this little feature.

IMO, It would rather good to use techniques that process the data at client side (Browser) to render this feature.      