class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0 ; 
        int counter = 0 ; 

        for(int i = 0 ; i<events.size() ; i++){

            if(events[i]!="W" and events[i]!="WD" and events[i]!="NB"){
                score += stoi(events[i]);
            }
            else if(events[i]=="W"){
                counter++;
            }
            else{
                score++;
            }
            if(counter==10){
                break;
            }
        }
    return {score, counter};
        
    }
};