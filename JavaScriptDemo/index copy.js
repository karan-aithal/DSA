

// useState

// State is the data that the component holds which you want the react engine to track

// name in the  textbox changing
// react should track the name
// header should change accordingly

// we will assign a state to the name textbox value

// state(name) changes, your component will be rerendered to reflect the changes.

// let /const/var

// it is special react variable

// As and when the user types into the textbox --
// The state should be set with the  value typed by the user


// details of the current event

// event will have
// name of the element into which user is typing
// what is the value typed by the user, etc

// Two way data binding

// value of the state ->value of the textbox setName(event.target.value)
// value of the textbox -value of the state value={name}



import React, { useState } from "react";


export default function App() {
   const [name, setName] = useState("");


  return (
    <> 
    <input type="text" placeholder="Your name..." 
    value={name} onChange={(event)=>{setName(event.target.value)}}/>
<h1>Hello {name}!! </h1>
    </>
  );


}


// Form reloads when every button is clicked by default 
// to prevent this, we use event.preventDefault();

import { useState } from "react";
function Login(){


    const [userName,setUserName] = useState("");
    const [password,setPassword] = useState("");
    const [message,setMessage] = useState("");

    const handleClick=(event)=>{
        event.preventDefault();
       if(userName==="admin" && password==="admin"){
        setMessage("Login Successful");
       }
       else{
        setMessage("Login Failed");
       }
    }


    return(
        <>
        <h1>Welcome to ABC Stores!</h1>
        <form>
            <input type="text" placeholder="Username"  name="userName" 
            value={userName} onChange={(event)=>{setUserName(event.target.value)}} /><br/><br/>


            <input type="password" placeholder="Password" name="password" 
              value={password} onChange={(event)=>{setPassword(event.target.value)}} 
            /><br/><br/>
            <button onClick={handleClick}>Login</button>
        </form>
        <div>{message}</div>
        </>
    )
}
export default Login;



// --------------------------------------------------------------



import { useState } from "react";

function Login(){


   const [formData,setFormData] = useState({
      userName: "",
      password: ""
   });
    const [message,setMessage] = useState("");

    const handleClick=(event)=>{
       event.preventDefault();
       if(formData.userName==="admin" && formData.password==="admin"){
        setMessage("Login Successful");
       }
       else{
        setMessage("Login Failed");
       }
    }


    const handleChange=(event)=>{


       //write a sensible definition of handleChange so that it can be used for
       //  both input fields
        let fieldName=event.target.name;
        let fieldValue=event.target.value;
        // if(fieldName==="userName"){
        //     setFormData({userName:fieldValue,password:formData.password})
        // }
        // else if(fieldName==="password"){
        //     setFormData({userName:formData.userName,password:fieldValue})
            // }
            setFormData({...formData,[fieldName]:fieldValue})  
            // ...formData will load all formData with ... and adds additional fields
        //if you do not use spread operator, the other field value will be reset
       
       
    }
    return(
        <>
        <h1>Welcome to ABC Stores!</h1>
        <form>
            <input type="text" placeholder="Username"  name="userName" 
            value={formData.userName} onChange={handleChange} /><br/><br/>


            <input type="password" placeholder="Password" name="password" 
              value={formData.password} onChange={handleChange} 
            /><br/><br/>
            <button onClick={handleClick}>Login</button>
        </form>
        <div>{message}</div>
        </>
    )
}
export default Login;



import { useState } from "react";
function Login(){


   const [formData,setFormData] = useState({
      userName: "",
      password: ""
   });
    const [message,setMessage] = useState("");
    
    const handleClick=(event)=>{
       event.preventDefault();
       if(formData.userName==="admin" && formData.password==="admin"){
        setMessage("Login Successful");
       }
       else{
        setMessage("Login Failed");
       }
    }


    const handleChange=(event)=>{


      
        let fieldName=event.target.name;
        let fieldValue=event.target.value;
      
        switch(fieldName){
            case "userName":
                if(fieldValue===""){
                    setMessage("Username is required");
                }
                else if(fieldValue.length<3){
                    setMessage("Username should be minimum 3 characters");
                }
                else{
                    setMessage("");
                }
                break;
            case "password":
                if(fieldValue===""){
                    setMessage("Password is required");
                }
                else{
                    setMessage("");
                }
                break;
            }
        setFormData({...formData,[fieldName]:fieldValue})
       
       
    }
    return(
        <>
        <h1>Welcome to ABC Stores!</h1>
        <form>
            <input type="text" placeholder="Username"  name="userName" 
            value={formData.userName} onChange={handleChange} /><br/><br/>


            <input type="password" placeholder="Password" name="password" 
              value={formData.password} onChange={handleChange} 
            /><br/><br/>
            <button onClick={handleClick}>Login</button>
        </form>
        <div>{message}</div>
        </>
    )
}
export default Login;



import logo from './logo.svg';
  import './App.css';
  import { Route, Routes } from 'react-router-dom';
  import NavBar from './components/NavBar';
  import Login from './components/Login';
  import Home from './components/Home'
  import Register from './components/Register'
  //import Rooms from './components/Rooms'
  import Bookings from './components/Bookings'
  import Hotels from './components/Hotels'
  import BookRoom from './components/BookRoom';

  import Showreview from './components/Showreview';
  import Reschedule from './components/Reschedule';
  function App() {
    return (
      <div className="App">
       
        <Routes>
          <Route path="/" element={<NavBar />}>
            <Route index element={<Register />} />
            <Route path="/hotels" element={<Hotels />} />
            <Route path="/home" element={<Home />} />
            <Route path="/bookings" element={<Bookings />} />
            <Route path="/register" element={<Register />} />
            <Route path="/login" element={<Login />} />    
            <Route path="/bookroom/:hotel" element={<BookRoom />} />
            <Route path="/showreview/:hotelId" element={<Showreview />} />
            <Route path="/reschedule/:bookingId" element={<Reschedule />} />
          </Route>
        </Routes>
      </div>
    );
  }
 
  export default App;