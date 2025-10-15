import { useState } from "react";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css"
import axios from "axios";


function Register(){


   const [formData,setFormData] = useState({
      userName: "",
      password: ""
   });
   const [formErrors,setFormErrors] = useState({
    userName: "",
    password: ""
   });
   const [valid,setValid] = useState(true);
    const [message,setMessage] = useState("");
    const handleClick=(event)=>{
       event.preventDefault();
      axios.post("http://localhost:4000/users",formData)
      .then((response)=>{
         setMessage("User registered successfully");
    })
    .catch((error)=>{
        setMessage("Error in registering user");
    })
    console.log("request sent to database")
}


    const handleChange=(event)=>{


      
        let fieldName=event.target.name;
        let fieldValue=event.target.value;
      
        switch(fieldName){
            case "userName":
                if(fieldValue===""){
                   // setMessage("Username is required");
                   setFormErrors({...formErrors,userName:"Username is required"})
                   setValid(false)
                }
                else if(fieldValue.length<3){
                   // setMessage("Username should be minimum 3 characters");
                     setFormErrors({...formErrors,userName:"Username should be minimum 3 characters"})
                      setValid(false)
                }
                else{
                    //setMessage("");
                    setFormErrors({...formErrors,userName:""})
                    setValid(true)
                }
                break;
            case "password":
                if(fieldValue===""){
                   // setMessage("Password is required");
                     setFormErrors({...formErrors,password:"Password is required"}) 
                      setValid(false)
                }
                else{
                    //setMessage("");
                    setFormErrors({...formErrors,password:""});
                     setValid(true)
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
            value={formData.userName} onChange={handleChange} /><br/>
           {(formErrors.userName!=="") ?<div className="text text-danger">{formErrors.userName}</div>:null}
            <br/>


            <input type="password" placeholder="Password" name="password" 
              value={formData.password} onChange={handleChange} 
            /><br/>
            {(formErrors.password!=="") ? <div  className="text text-danger">{formErrors.password}</div>:null}
            <br/>
            <button onClick={handleClick} disabled={!valid}>Register</button>
        </form>
        {(message!=="") ? <div>{message}</div>:null}
        </>
    )
}
export default Register;




// ------------------------------------------------------------------------------------s


import { useState } from "react";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css"
import axios from "axios";


function Register(){


   const [formData,setFormData] = useState({
      userName: "",
      password: ""
   });
   const [formErrors,setFormErrors] = useState({
    userName: "",
    password: ""
   });
   const [valid,setValid] = useState(true);
    const [message,setMessage] = useState("");
    const handleClick=(event)=>{
       event.preventDefault();
      axios.post("http://localhost:4000/users",formData)
      .then((response)=>{
         setMessage("User registered successfully");
    })
    .catch((error)=>{
        setMessage("Error in registering user");
    })
    console.log("request sent to database")
}


    const handleChange=(event)=>{


      
        let fieldName=event.target.name;
        let fieldValue=event.target.value;
      
        switch(fieldName){
            case "userName":
                if(fieldValue===""){
                   // setMessage("Username is required");
                   setFormErrors({...formErrors,userName:"Username is required"})
                   setValid(false)
                }
                else if(fieldValue.length<3){
                   // setMessage("Username should be minimum 3 characters");
                     setFormErrors({...formErrors,userName:"Username should be minimum 3 characters"})
                      setValid(false)
                }
                else{
                    //setMessage("");
                    setFormErrors({...formErrors,userName:""})
                    setValid(true)
                }
                break;
            case "password":
                if(fieldValue===""){
                   // setMessage("Password is required");
                     setFormErrors({...formErrors,password:"Password is required"}) 
                      setValid(false)
                }
                else{
                    //setMessage("");
                    setFormErrors({...formErrors,password:""});
                     setValid(true)
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
            value={formData.userName} onChange={handleChange} /><br/>
           {(formErrors.userName!=="") ?<div className="text text-danger">{formErrors.userName}</div>:null}
            <br/>


            <input type="password" placeholder="Password" name="password" 
              value={formData.password} onChange={handleChange} 
            /><br/>
            {(formErrors.password!=="") ? <div  className="text text-danger">{formErrors.password}</div>:null}
            <br/>
            <button onClick={handleClick} disabled={!valid}>Register</button>
        </form>
        {(message!=="") ? <div>{message}</div>:null}
        </>
    )
}
export default Register;


// ---------------------------------------------------------------------


import { useState } from "react";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css"
import axios from "axios";


function Register(){


   const [formData,setFormData] = useState({
      userName: "",
      password: ""
   });
   const [formErrors,setFormErrors] = useState({
    userName: "",
    password: ""
   });
   const [valid,setValid] = useState(true);
    const [message,setMessage] = useState("");
    const handleClick=(event)=>{
       event.preventDefault();
      axios.post("http://localhost:4000/users",formData)
      .then((response)=>{
         setMessage("User registered successfully");
    })
    .catch((error)=>{
        setMessage("Error in registering user");
    })
    console.log("request sent to database")
}


    const handleChange=(event)=>{


      
        let fieldName=event.target.name;
        let fieldValue=event.target.value;
      
        switch(fieldName){
            case "userName":
                if(fieldValue===""){
                   // setMessage("Username is required");
                   setFormErrors({...formErrors,userName:"Username is required"})
                   setValid(false)
                }
                else if(fieldValue.length<3){
                   // setMessage("Username should be minimum 3 characters");
                     setFormErrors({...formErrors,userName:"Username should be minimum 3 characters"})
                      setValid(false)
                }
                else{
                    //setMessage("");
                    setFormErrors({...formErrors,userName:""})
                    setValid(true)
                }
                break;
            case "password":
                if(fieldValue===""){
                   // setMessage("Password is required");
                     setFormErrors({...formErrors,password:"Password is required"}) 
                      setValid(false)
                }
                else{
                    //setMessage("");
                    setFormErrors({...formErrors,password:""});
                     setValid(true)
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
            value={formData.userName} onChange={handleChange} /><br/>
           {(formErrors.userName!=="") ?<div className="text text-danger">{formErrors.userName}</div>:null}
            <br/>


            <input type="password" placeholder="Password" name="password" 
              value={formData.password} onChange={handleChange} 
            /><br/>
            {(formErrors.password!=="") ? <div  className="text text-danger">{formErrors.password}</div>:null}
            <br/>
            <button onClick={handleClick} disabled={!valid}>Register</button>
        </form>
        {(message!=="") ? <div>{message}</div>:null}
        </>
    )
}
export default Register;