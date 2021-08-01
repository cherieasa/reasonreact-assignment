module ColorRowRef = {
    [@react.component]
    let make = () =>
        <div style=(ReactDOM.Style.make(~display="flex", ~justifyContent="center", ~alignItems="center", ()))>
            <ColorRef />    
            <ColorRef /> 
            <ColorRef /> 
        </div>
};
