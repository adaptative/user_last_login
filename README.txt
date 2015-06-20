IMO, The issue with the given list of task is that, no emphasis is given to 
implement the caching mechanism. Which is highly recommended to the high 
trafficked website like weather.com. I understand that the “Last Login” parameter 
can not be cached but there are such caching mechanism exists to overcome this issue. 
Edge side include is such an example.

Typically, a page is consist of a mix of cacheable and non cacheable content 
(such as user specific content like “Last Login”). Previously, the presence of 
any non cacheable content on a page would have rendered the whole page non cacheable, 
even if that portion was a small percentage of the overall content.

With ESI, the non cacheable portion can be split off into a different request, 
meaning that the vast majority of the page can be cached. This increases the ratio 
of cached requests to non cached requests (what we call the "cache-hit ratio”).

IMO, The given requirement for “user’s Last Login” should also include the 
requirement of implementing appropriate caching mechanism to maintain the 
performance of such a high trafficked website. 