
// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int led1 = D0; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  
  // delay for dash is 3 units of time - a dot is  1 unit
  //dot is 300 units, dash is 900
  
 
  a();
  n(); 
  d();
  r();
  e();
  w();
  // And repeat!
}

void dash(int i) 
{
     // DASH   ----------
     for (int x=0; x<i; x++)
     {
    digitalWrite(led2, HIGH);
    delay(900); //dot is 1 unit 300 milliseconds & dash is 3 x = 900
    digitalWrite(led2, LOW);
    delay(300);
     }
    
}

void dot(int i)
{
    //dot
    for (int x=0; x<i; x++)
    {
    digitalWrite(led2, HIGH);
    delay(300); //dot is 1 unit 300 milliseconds & dash is 3 x = 900
    digitalWrite(led2, LOW);
    delay(300); //delay between dots or dashes is 1 unit
    }
  
}



void a()
{
    dot(1);
    dash(1);
}


void b()
{
    dash(1);
    dot(3);
}

void c()
{
    dash(1);
    dot(1);
    dash(1);
    dot(1);
}


void d()
{
    dash(1);
    dot(2);
    
}


void e()
{
    dot(1);
    
}


void f()
{
    dot(2);
    dash(1);
    dot(1);
    
    
}


void g()
{
    dash(2);
    dot(1);
    
}


void h()
{
    dot(4);
    
       
}


void i()
{
    dot(2);
    
}


void j()
{
   dot(1);
    dash(3);
}


void k()
{
    dash(1);
    dot(1);
    dash(1);
}


void l()
{
    dot(1);
    dash(1);
    dot(2);
}


void m()
{
    dash(2);
    
}


void n()
{
    dash(1);
    dot(1);
}


void o()
{
    dash(3);
}


void p()
{
    dot(1);
    dash(2);
    dot(1);
        
}


void q()
{
    dash(2);
    dot(1);
    dash(1);
}


void r()
{
    dot(1);
    dash(1);
    dot(1);
       
}


void s()
{
   dot(3);
}        


void t()
{
  dash(1);
}


void u()
{
    dot(2);
    dash(1);
}



void v()
{
    dot(3);
    dash(1);
}


void w()
{
    dot(1);
    dash(2);
}


void x()
{
    dash(1);
    dot(2);
    dash(1);
}


void y()
{
    dash(1);
    dot(1);
    dash(2);
}


void z()
{
    dash(2);
    dot(2);
      
}
