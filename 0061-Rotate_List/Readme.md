## Learning when coding

**k = k% size; This is really important!** 
- My first thought: change the data number, `head->val = new data`
    - the new data  = old data - move + list size
    - This can only work when the data is accending and continuous
    - Also, it will have the zero problem, 
        - when data don't has 0: data<=0 new data +size;
        - when data has 0: data<0 new data+size;
    - Array can use this method because it is hard to resize and insert; however, link list can directly change the order.

- Second thought: **make the Link list a round** `tail->next = head`
    - In this way, just move `size-k` times, and make `prev->next = NULL`
    - 


