open UtilColor;

[@react.component]
let make = () => {
    let (hex, setHex) = React.useState(_ => Color.initialiseColor());
    <div style=(ReactDOM.Style.make(~display="flex", ~justifyContent="center", ~alignItems="center", ~margin="16px 0px", ()))>
        <div style=(ReactDOM.Style.make(~display="flex", ~flexDirection="column", ~alignItems="center", ()))>
            <div style=(ReactDOM.Style.make(~backgroundColor=hex, ~height="80px", ~width="80px", ()))/>
            <div>{React.string(hex)}</div>
        </div>
        <RandomButton onClick={_ => setHex(_ => Color.initialiseColor())} />
    </div>;
}
