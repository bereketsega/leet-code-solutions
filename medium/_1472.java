package medium;

import java.util.ArrayList;

public class _1472 {

    ArrayList<String> urlList = new ArrayList<String>();
    int urlCount;
    int currUrlIndex;

    public _1472(String homepage) {
        urlList.add(homepage);
        urlCount = 1;
        currUrlIndex = 0;
    }
    
    public void visit(String url) {
        int tempCount = urlCount;
        while(tempCount > currUrlIndex + 1) {
            urlList.remove(--tempCount);
        }
        urlCount = tempCount;
        urlList.add(url);
        urlCount++;
        currUrlIndex++;
    }
    
    public String back(int steps) {
        if(currUrlIndex < steps) {
            currUrlIndex = 0;
            return urlList.get(0);
        } 
        else {
            int i = currUrlIndex - steps;
            currUrlIndex = i;
            return urlList.get(i);
        }
    }
    
    public String forward(int steps) {
        if(steps+currUrlIndex >= urlCount) {
            currUrlIndex = urlCount - 1;
            return urlList.get(currUrlIndex);
        } 
        else {
            int i = currUrlIndex + steps;
            currUrlIndex = i;
            return urlList.get(i);
        }
    }

    public static void main(String[] args) {
        _1472 browserHistory = new _1472("leetcode.com");

        browserHistory.visit("google.com");  
        browserHistory.visit("facebook.com"); 
        browserHistory.visit("youtube.com"); 

        System.out.println(browserHistory.back(1));
        System.out.println(browserHistory.back(1));
        System.out.println(browserHistory.forward(1));

        browserHistory.visit("linkedin.com"); 

        System.out.println(browserHistory.forward(2));
        System.out.println(browserHistory.back(2));
        System.out.println(browserHistory.back(7));
    }

}

/*
You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.

Implement the BrowserHistory class:

    BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
    void visit(string url) Visits url from the current page. It clears up all the forward history.
    string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
    string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.

*/
