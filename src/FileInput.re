[@bs.module "material-ui-file-input"]
external reactClass : ReasonReact.reactClass = "default";

let make =
    (
      ~name: string="",
      ~label: string,
      ~onChange: (Js.t({..}) as 'a) => unit,
      ~helperText: string="",
      ~formControlProps: option(Js.t({..}))=?,
      ~inputLabelProps: option(Js.t({..}))=?,
      ~inputProps: option(Js.t({..}))=?,
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
