module ColorRowState = {
    [@react.component]
    let make = () =>
        <div style=(ReactDOM.Style.make(~display="flex", ~justifyContent="center", ~alignItems="center", ()))>
            <ColorState />    
            <ColorState/> 
            <ColorState /> 
        </div>
};
