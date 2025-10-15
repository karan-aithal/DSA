import axios from "axios";
import {useState} from "react";
export default function ViewUser(){
    const [user,setUser]=useState({id:"",userName:""})
    const [message,setMessage]=useState("")
    const viewUser=(event)=>{
        event.preventDefault();
        axios.get("http://localhost:4000/users/"+user.id)
        .then((response)=>{
            setUser(response.data)
            console.log(response.data)
        })
        .catch((error)=>{
            setMessage("Error in fetching user")
        })
    }
    return(
        <>
        <form>
            <input type="text" placeholder="id"  name="id" value={user.id} onChange={(event)=>{setUser({...user,id:event.target.value})}}/><br/><br/>
            <button onClick={viewUser}>View User</button>
        </form>
        
      { (user.userName!=="")? <div>
            <h1>User Details</h1>
            UserName:{user.userName}<br/>
            ID:{user.id}<br/>
        </div>:null
}
{(message!=="")? <div>{message}</div>:null}
        </>
    )


}
// ------------------------------------------------------

import axios from "axios";
import {useState} from "react";
export default function ViewUser(){
const [user,setUser]=useState({id:"",userName:""})
const [message,setMessage]=useState("")
const viewUser=(event)=>{
event.preventDefault();
axios.get("http://localhost:4000/users/"+user.id)
.then((response)=>{
setUser(response.data)
console.log(response.data)
})
.catch((error)=>{
setMessage("Error in fetching user")
})
}
return(
<>
<form>
<input type="text" placeholder="id" name="id" value={user.id} onChange={(event)=>{setUser({...user,id:event.target.value})}}/><br/><br/>
<button onClick={viewUser}>View User</button>
</form>

{ (user.userName!=="")? <div>
<h1>User Details</h1>
UserName:{user.userName}<br/>
ID:{user.id}<br/>
</div>:null
}
{(message!=="")? <div>{message}</div>:null}
</>
)


}

// ------------------------------------


LAkshmisri.L@infosys.com 9/11/2025 4:15 PM • 


import axios from "axios";
import {useState} from "react";
export default function ViewUser(){
const [user,setUser]=useState({id:"",userName:""})
const [message,setMessage]=useState("")
const viewUser=(event)=>{
event.preventDefault();
axios.get("http://localhost:4000/users/"+user.id)
.then((response)=>{
setUser(response.data)
console.log(response.data)
})
.catch((error)=>{
setMessage("Error in fetching user")
})
}
return(
<>
<form>
<input type="text" placeholder="id" name="id" value={user.id} onChange={(event)=>{setUser({...user,id:event.target.value})}}/><br/><br/>
<button onClick={viewUser}>View User</button>
</form>

{ (user.userName!=="")? <div>
<h1>User Details</h1>
UserName:{user.userName}<br/>
ID:{user.id}<br/>
</div>:null
}
{(message!=="")? <div>{message}</div>:null}
</>
)


}

// ---------------------------------------------




import axios from "axios";
import {useState} from "react";
import "../node_modules/bootstrap/dist/css/bootstrap.min.css"
export default function ViewUser(){
    const [user,setUser]=useState({id:"",userName:""})
    const [message,setMessage]=useState("")
    const viewUser=(event)=>{
        event.preventDefault();
        axios.get("http://localhost:4000/users/"+user.id)
        .then((response)=>{
            setUser(response.data)
            console.log(response.data)
        })
        .catch((error)=>{
            setMessage("Error in fetching user")
        })
    }
    const updateUser=(event)=>{
        event.preventDefault();
        axios.put("http://localhost:4000/users/"+user.id,user)
      .then((response)=>{
       
         setMessage("User updated successfully with id "+response.data.id);
    })
    .catch((error)=>{
        console.log(error)
        setMessage("Error in updating user");
    })
    }
    const removeUser=(event)=>{
        event.preventDefault();
        axios.delete("http://localhost:4000/users/"+user.id)
        .then((response)=>{
            setMessage("User deleted successfully with id "+user.id);
        })
        .catch((error)=>{
            console.log(error)
            setMessage("Error in deleting user");
        })
    }
    return(
        <>
        <form>
            <input type="text" placeholder="id"  name="id" value={user.id} onChange={(event)=>{setUser({...user,id:event.target.value})}}/><br/><br/>
            <button onClick={viewUser}>View User</button>|
             <button onClick={updateUser}>Update User</button>|
              <button onClick={removeUser}>Remove User</button>
        </form>
        <br/>
      { (user.userName!=="")? <div>
            <h4 className="text text-primary">User Details</h4>
            UserName:<input type="text" value={user.userName} name="userName" onChange={(event)=>{setUser({...user,userName:event.target.value})}}/><br/>
            ID:{user.id}<br/>
        </div>:null
}
{(message!=="")? <div>{message}</div>:null}
        </>
    )


}