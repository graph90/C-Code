 //     _____          ___                                 ___           ___                                        
 //    /  /::\        /  /\          ___                  /__/\         /  /\                        ___            
 //   /  /:/\:\      /  /:/_        /__/\                |  |::\       /  /::\                      /  /\           
 //  /  /:/  \:\    /  /:/ /\       \  \:\               |  |:|:\     /  /:/\:\    ___     ___     /  /:/           
 // /__/:/ \__\:|  /  /:/ /:/_       \  \:\            __|__|:|\:\   /  /:/~/:/   /__/\   /  /\   /  /:/            
 // \  \:\ /  /:/ /__/:/ /:/ /\  ___  \__\:\          /__/::::| \:\ /__/:/ /:/___ \  \:\ /  /:/  /  /::\            
 //  \  \:\  /:/  \  \:\/:/ /:/ /__/\ |  |:|          \  \:\~~\__\/ \  \:\/:::::/  \  \:\  /:/  /__/:/\:\           
 //   \  \:\/:/    \  \::/ /:/  \  \:\|  |:|           \  \:\        \  \::/~~~~    \  \:\/:/   \__\/  \:\          
 //    \  \::/      \  \:\/:/    \  \:\__|:|            \  \:\        \  \:\         \  \::/         \  \:\         
 //     \__\/        \  \::/      \__\::::/              \  \:\        \  \:\         \__\/           \__\/         
 //                   \__\/           ~~~~                \__\/         \__\/                                       
 //-----------------------------------------------------------------------------------------------------------
#ifndef __stackint_h__
#define __stackint_h__

#include "stack.h"

class StackInt : public Stack{
  protected:
  size_t stride;
  
  public:
  StackInt();
  void push(int val);
  int pop();

  int read(istream& is);
  int write(ostream& os) const;
  
  friend ostream& operator<< (ostream& os, const StackInt& s);
};

#endif