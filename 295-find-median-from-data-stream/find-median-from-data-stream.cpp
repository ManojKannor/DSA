class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>, greater<int>> minHeap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxHeap.push(num);
        int x = maxHeap.top();
        maxHeap.pop();
        minHeap.push(x);

        if(minHeap.size() > maxHeap.size()){
            int x = minHeap.top();
            minHeap.pop();
            maxHeap.push(x);
        }
    }
    
    double findMedian() {
        if(minHeap.size() == maxHeap.size()){
            return ((double)minHeap.top() + maxHeap.top() )/2.0;
        }

        return (double)maxHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */