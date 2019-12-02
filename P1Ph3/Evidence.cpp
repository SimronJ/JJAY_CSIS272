#include "Evidence.h"
#include "Timestamp.h"
using namespace std;

// define constructor that takes a Timestamp and a string  
Evidence::Evidence(Timestamp ts, string agent){
    collected_ts = ts;
    custody_chain.push_back(agent);
}

// define overload of << operator to output the Evidence details
ostream& operator<<(ostream& output, Evidence& e){

    output << "Collected: " << e.collected_ts << "\n"
           << "Collecting Agent: " << e.custody_chain.front() << "\n"
           << "Location: " << ((e.current_agent.empty())? "In evidence locker" : "Currently signed out to " + e.current_agent)  << "\n"
           << endl;

    return output;
}

// define check_out function
void Evidence::check_out(string agent){
    current_agent = agent;
    custody_chain.push_back(agent);
}

// define check_in function
void Evidence::check_in(){
    current_agent = "";
}

void Evidence::display_custody_chain(){
    std::cout << "Custody Chain: " << endl;
    for (auto &i : custody_chain ) {
        std::cout << i << '\n';
    }
    std::cout << '\n';
}
