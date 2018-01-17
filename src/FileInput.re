[@bs.module "material-ui-file-input"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~name="",
      ~label,
      ~onChange,
      ~helperText="",
      ~formControlProps=?,
      ~inputLabelProps=?,
      ~inputProps=?,
      _children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={
      "name": name,
      "label": label,
      "onChange": onChange,
      "helperText": helperText,
      "formControlProps": formControlProps,
      "inputLabelProps": inputLabelProps,
      "inputProps": inputProps
    },
    [||]
  );