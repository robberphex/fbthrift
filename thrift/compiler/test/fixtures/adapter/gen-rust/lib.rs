// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::type_complexity)]

pub use self::errors::*;
pub use self::types::*;

pub mod types;

#[doc(hidden)]
pub mod dependencies {
    pub use cpp as cpp;
    pub use python as python;
    pub use thrift as thrift;
    pub use hack as hack;
}

pub mod services {
    pub mod service {

        #[derive(Clone, Debug)]
        pub enum FuncExn {
            #[doc(hidden)]
            Success(crate::types::MyI32),
            ApplicationException(::fbthrift::ApplicationException),
        }

        impl ::std::convert::From<::fbthrift::ApplicationException> for FuncExn {
            fn from(exn: ::fbthrift::ApplicationException) -> Self {
                FuncExn::ApplicationException(exn)
            }
        }

        impl ::fbthrift::ExceptionInfo for FuncExn {
            fn exn_name(&self) -> &'static str {
                match self {
                    FuncExn::Success(_) => panic!("ExceptionInfo::exn_name called on Success"),
                    FuncExn::ApplicationException(aexn) => aexn.exn_name(),
                }
            }

            fn exn_value(&self) -> String {
                match self {
                    FuncExn::Success(_) => panic!("ExceptionInfo::exn_value called on Success"),
                    FuncExn::ApplicationException(aexn) => aexn.exn_value(),
                }
            }

            fn exn_is_declared(&self) -> bool {
                match self {
                    FuncExn::Success(_) => panic!("ExceptionInfo::exn_is_declared called on Success"),
                    FuncExn::ApplicationException(aexn) => aexn.exn_is_declared(),
                }
            }
        }

        impl ::fbthrift::ResultInfo for FuncExn {
            fn result_type(&self) -> ::fbthrift::ResultType {
                match self {
                    FuncExn::Success(_) => ::fbthrift::ResultType::Return,
                    FuncExn::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
                }
            }
        }

        impl ::fbthrift::GetTType for FuncExn {
            const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
        }

        impl<P> ::fbthrift::Serialize<P> for FuncExn
        where
            P: ::fbthrift::ProtocolWriter,
        {
            fn write(&self, p: &mut P) {
                if let FuncExn::ApplicationException(aexn) = self {
                    return aexn.write(p);
                }
                p.write_struct_begin("Func");
                match self {
                    FuncExn::Success(inner) => {
                        p.write_field_begin(
                            "Success",
                            ::fbthrift::TType::I32,
                            0i16,
                        );
                        inner.write(p);
                        p.write_field_end();
                    }
                    FuncExn::ApplicationException(_aexn) => unreachable!(),
                }
                p.write_field_stop();
                p.write_struct_end();
            }
        }

        impl<P> ::fbthrift::Deserialize<P> for FuncExn
        where
            P: ::fbthrift::ProtocolReader,
        {
            fn read(p: &mut P) -> ::anyhow::Result<Self> {
                static RETURNS: &[::fbthrift::Field] = &[
                    ::fbthrift::Field::new("Success", ::fbthrift::TType::I32, 0),
                ];
                let _ = p.read_struct_begin(|_| ())?;
                let mut once = false;
                let mut alt = ::std::option::Option::None;
                loop {
                    let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                    match ((fty, fid as ::std::primitive::i32), once) {
                        ((::fbthrift::TType::Stop, _), _) => {
                            p.read_field_end()?;
                            break;
                        }
                        ((::fbthrift::TType::I32, 0i32), false) => {
                            once = true;
                            alt = ::std::option::Option::Some(FuncExn::Success(::fbthrift::Deserialize::read(p)?));
                        }
                        ((ty, _id), false) => p.skip(ty)?,
                        ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                            ::fbthrift::ApplicationException::new(
                                ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                                format!(
                                    "unwanted extra union {} field ty {:?} id {}",
                                    "FuncExn",
                                    badty,
                                    badid,
                                ),
                            )
                        )),
                    }
                    p.read_field_end()?;
                }
                p.read_struct_end()?;
                alt.ok_or_else(||
                    ::fbthrift::ApplicationException::new(
                        ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                        format!("Empty union {}", "FuncExn"),
                    )
                    .into(),
                )
            }
        }
    }
}

/// Client implementation for each service in `module`.
pub mod client {

    pub struct ServiceImpl<P, T, S = ::fbthrift::NoopSpawner> {
        transport: T,
        _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
    }

    impl<P, T, S> ServiceImpl<P, T, S>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        pub fn new(
            transport: T,
        ) -> Self {
            Self {
                transport,
                _phantom: ::std::marker::PhantomData,
            }
        }

        pub fn transport(&self) -> &T {
            &self.transport
        }


        fn _func_impl(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
            rpc_options: T::RpcOptions,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            use ::const_cstr::const_cstr;
            use ::tracing::Instrument as _;
            use ::futures::FutureExt as _;

            const_cstr! {
                SERVICE_NAME = "Service";
                METHOD_NAME = "Service.func";
            }
            let args = self::Args_Service_func {
                arg1: arg_arg1,
                arg2: arg_arg2,
                arg3: arg_arg3,
                _phantom: ::std::marker::PhantomData,
            };

            // need to do call setup outside of async block because T: Transport isn't Send
            let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("func", &args) {
                ::std::result::Result::Ok(res) => res,
                ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
            };

            let call = self.transport()
                .call(SERVICE_NAME.as_cstr(), METHOD_NAME.as_cstr(), request_env, rpc_options)
                .instrument(::tracing::trace_span!("call", function = "Service.func"));

            async move {
                let reply_env = call.await?;

                let de = P::deserializer(reply_env);
                let (res, _de): (::std::result::Result<crate::services::service::FuncExn, _>, _) =
                    ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

                match res {
                    ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                    ::std::result::Result::Err(aexn) =>
                        ::std::result::Result::Err(crate::errors::service::FuncError::ApplicationException(aexn))
                }
            }
            .instrument(::tracing::info_span!("Service.func"))
            .boxed()
        }
    }

    pub trait Service: ::std::marker::Send {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>>;
    }

    pub trait ServiceExt<T>: Service
    where
        T: ::fbthrift::Transport,
    {
        fn func_with_rpc_opts(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
            rpc_options: T::RpcOptions,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>>;
    }

    struct Args_Service_func<'a> {
        arg1: &'a ::std::primitive::str,
        arg2: &'a ::std::primitive::str,
        arg3: &'a crate::types::Foo,
        _phantom: ::std::marker::PhantomData<&'a ()>,
    }

    impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_Service_func<'a> {
        #[inline]
        #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "Service.func"))]
        fn write(&self, p: &mut P) {
            p.write_struct_begin("args");
            p.write_field_begin("arg1", ::fbthrift::TType::String, 1i16);
            ::fbthrift::Serialize::write(&self.arg1, p);
            p.write_field_end();
            p.write_field_begin("arg2", ::fbthrift::TType::String, 2i16);
            ::fbthrift::Serialize::write(&self.arg2, p);
            p.write_field_end();
            p.write_field_begin("arg3", ::fbthrift::TType::Struct, 3i16);
            ::fbthrift::Serialize::write(&self.arg3, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P, T, S> Service for ServiceImpl<P, T, S>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            let rpc_options = T::RpcOptions::default();
            self._func_impl(
                arg_arg1,
                arg_arg2,
                arg_arg3,
                rpc_options,
            )
        }
    }

    impl<P, T, S> ServiceExt<T> for ServiceImpl<P, T, S>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        fn func_with_rpc_opts(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
            rpc_options: T::RpcOptions,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            self._func_impl(
                arg_arg1,
                arg_arg2,
                arg_arg3,
                rpc_options,
            )
        }
    }

    impl<'a, S> Service for S
    where
        S: ::std::convert::AsRef<dyn Service + 'a>,
        S: ::std::marker::Send,
    {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            self.as_ref().func(
                arg_arg1,
                arg_arg2,
                arg_arg3,
            )
        }
    }

    impl<'a, S, T> ServiceExt<T> for S
    where
        S: ::std::convert::AsRef<dyn Service + 'a>,
        S: ::std::convert::AsRef<dyn ServiceExt<T> + 'a>,
        S: ::std::marker::Send,
        T: ::fbthrift::Transport,
    {
        fn func_with_rpc_opts(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
            rpc_options: T::RpcOptions,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            <Self as ::std::convert::AsRef<dyn ServiceExt<T>>>::as_ref(self).func_with_rpc_opts(
                arg_arg1,
                arg_arg2,
                arg_arg3,
                rpc_options,
            )
        }
    }

    #[derive(Clone)]
    pub struct make_Service;

    /// To be called by user directly setting up a client. Avoids
    /// needing ClientFactory trait in scope, avoids unidiomatic
    /// make_Trait name.
    ///
    /// ```
    /// # const _: &str = stringify! {
    /// use bgs::client::BuckGraphService;
    ///
    /// let protocol = BinaryProtocol::new();
    /// let transport = HttpClient::new();
    /// let client = <dyn BuckGraphService>::new(protocol, transport);
    /// # };
    /// ```
    impl dyn Service {
        pub fn new<P, T>(
            protocol: P,
            transport: T,
        ) -> ::std::sync::Arc<impl Service + ::std::marker::Send + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport,
            P::Deserializer: ::std::marker::Send,
        {
            let spawner = ::fbthrift::help::NoopSpawner;
            Self::with_spawner(protocol, transport, spawner)
        }

        pub fn with_spawner<P, T, S>(
            protocol: P,
            transport: T,
            spawner: S,
        ) -> ::std::sync::Arc<impl Service + ::std::marker::Send + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport,
            P::Deserializer: ::std::marker::Send,
            S: ::fbthrift::help::Spawner,
        {
            let _ = protocol;
            let _ = spawner;
            ::std::sync::Arc::new(ServiceImpl::<P, T, S>::new(transport))
        }
    }

    impl<T> dyn ServiceExt<T>
    where
        T: ::fbthrift::Transport,
    {
        pub fn new<P>(
            protocol: P,
            transport: T,
        ) -> ::std::sync::Arc<impl ServiceExt<T> + ::std::marker::Send + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            P::Deserializer: ::std::marker::Send,
        {
            let spawner = ::fbthrift::help::NoopSpawner;
            Self::with_spawner(protocol, transport, spawner)
        }

        pub fn with_spawner<P, S>(
            protocol: P,
            transport: T,
            spawner: S,
        ) -> ::std::sync::Arc<impl ServiceExt<T> + ::std::marker::Send + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            P::Deserializer: ::std::marker::Send,
            S: ::fbthrift::help::Spawner,
        {
            let _ = protocol;
            let _ = spawner;
            ::std::sync::Arc::new(ServiceImpl::<P, T, S>::new(transport))
        }
    }

    pub type ServiceDynClient = <make_Service as ::fbthrift::ClientFactory>::Api;
    pub type ServiceClient = ::std::sync::Arc<ServiceDynClient>;

    /// The same thing, but to be called from generic contexts where we are
    /// working with a type parameter `C: ClientFactory` to produce clients.
    impl ::fbthrift::ClientFactory for make_Service {
        type Api = dyn Service + ::std::marker::Send + ::std::marker::Sync + 'static;

        fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport + ::std::marker::Sync,
            P::Deserializer: ::std::marker::Send,
            S: ::fbthrift::help::Spawner,
        {
            <dyn Service>::with_spawner(protocol, transport, spawner)
        }
    }

}

/// Server definitions for `module`.
pub mod server {
    #[::async_trait::async_trait]
    pub trait Service: ::std::marker::Send + ::std::marker::Sync + 'static {
        async fn func(
            &self,
            _arg1: crate::types::StringWithAdapter,
            _arg2: ::std::string::String,
            _arg3: crate::types::Foo,
        ) -> ::std::result::Result<crate::types::MyI32, crate::services::service::FuncExn> {
            ::std::result::Result::Err(crate::services::service::FuncExn::ApplicationException(
                ::fbthrift::ApplicationException::unimplemented_method(
                    "Service",
                    "func",
                ),
            ))
        }
    }

    #[::async_trait::async_trait]
    impl<T> Service for ::std::boxed::Box<T>
    where
        T: Service + Send + Sync + ?Sized,
    {
        async fn func(
            &self,
            arg1: crate::types::StringWithAdapter,
            arg2: ::std::string::String,
            arg3: crate::types::Foo,
        ) -> ::std::result::Result<crate::types::MyI32, crate::services::service::FuncExn> {
            (**self).func(
                arg1, 
                arg2, 
                arg3, 
            ).await
        }
    }

    /// Processor for Service's methods.
    #[derive(Clone, Debug)]
    pub struct ServiceProcessor<P, H, R> {
        service: H,
        supa: ::fbthrift::NullServiceProcessor<P, R>,
        _phantom: ::std::marker::PhantomData<(P, H, R)>,
    }

    struct Args_Service_func {
        arg1: crate::types::StringWithAdapter,
        arg2: ::std::string::String,
        arg3: crate::types::Foo,
    }
    impl<P: ::fbthrift::ProtocolReader> ::fbthrift::Deserialize<P> for self::Args_Service_func {
        #[inline]
        #[::tracing::instrument(skip_all, level = "trace", name = "deserialize_args", fields(method = "Service.func"))]
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static ARGS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("arg1", ::fbthrift::TType::String, 1),
                ::fbthrift::Field::new("arg2", ::fbthrift::TType::String, 2),
                ::fbthrift::Field::new("arg3", ::fbthrift::TType::Struct, 3),
            ];
            let mut field_arg1 = ::std::option::Option::None;
            let mut field_arg2 = ::std::option::Option::None;
            let mut field_arg3 = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), ARGS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::String, 1) => field_arg1 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 2) => field_arg2 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 3) => field_arg3 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                arg1: field_arg1.ok_or_else(|| ::anyhow::anyhow!("`{}` missing arg `{}`", "Service.func", "arg1"))?,
                arg2: field_arg2.ok_or_else(|| ::anyhow::anyhow!("`{}` missing arg `{}`", "Service.func", "arg2"))?,
                arg3: field_arg3.ok_or_else(|| ::anyhow::anyhow!("`{}` missing arg `{}`", "Service.func", "arg3"))?,
            })
        }
    }


    impl<P, H, R> ServiceProcessor<P, H, R>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Sync,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = ::fbthrift::ProtocolDecoded<P>>
            + ::std::marker::Send + ::std::marker::Sync,
    {
        pub fn new(service: H) -> Self {
            Self {
                service,
                supa: ::fbthrift::NullServiceProcessor::new(),
                _phantom: ::std::marker::PhantomData,
            }
        }

        pub fn into_inner(self) -> H {
            self.service
        }

        #[::tracing::instrument(skip_all, fields(method = "Service.func"))]
        async fn handle_func<'a>(
            &'a self,
            p: &'a mut P::Deserializer,
            _req_ctxt: &R,
            ctx_stack: &mut R::ContextStack,
        ) -> ::anyhow::Result<crate::services::service::FuncExn> {
            use ::const_cstr::const_cstr;
            use ::tracing::Instrument as _;
            use ::futures::FutureExt as _;

            const_cstr! {
                SERVICE_NAME = "Service";
                METHOD_NAME = "Service.func";
            }
            ::fbthrift::ContextStack::pre_read(ctx_stack)?;
            let _args: self::Args_Service_func = ::fbthrift::Deserialize::read(p)?;
            ::fbthrift::ContextStack::on_read_data(ctx_stack, &::fbthrift::SerializedMessage {
                protocol: P::PROTOCOL_ID,
                method_name: METHOD_NAME.as_cstr(),
                buffer: ::std::marker::PhantomData, // FIXME P::into_buffer(p).reset(),
            })?;
            ::fbthrift::ContextStack::post_read(ctx_stack, 0)?;

            let res = ::std::panic::AssertUnwindSafe(
                self.service.func(
                    _args.arg1,
                    _args.arg2,
                    _args.arg3,
                )
            )
            .catch_unwind()
            .instrument(::tracing::info_span!("service_handler", method = "Service.func"))
            .await;

            // nested results - panic catch on the outside, method on the inside
            let res = match res {
                ::std::result::Result::Ok(::std::result::Result::Ok(res)) => {
                    ::tracing::info!(method = "Service.func", "success");
                    crate::services::service::FuncExn::Success(res)
                }
                ::std::result::Result::Ok(::std::result::Result::Err(crate::services::service::FuncExn::Success(_))) => {
                    panic!(
                        "{} attempted to return success via error",
                        "func",
                    )
                }
                ::std::result::Result::Ok(::std::result::Result::Err(exn)) => {
                    ::tracing::error!(method = "Service.func", exception = ?exn);
                    exn
                }
                ::std::result::Result::Err(exn) => {
                    let aexn = ::fbthrift::ApplicationException::handler_panic("Service.func", exn);
                    crate::services::service::FuncExn::ApplicationException(aexn)
                }
            };

            ::std::result::Result::Ok(res)
        }
    }

    #[::async_trait::async_trait]
    impl<P, H, R> ::fbthrift::ServiceProcessor<P> for ServiceProcessor<P, H, R>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        H: Service,
        P::Frame: ::std::marker::Send + 'static,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = ::fbthrift::ProtocolDecoded<P>>
            + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        type RequestContext = R;

        #[inline]
        fn method_idx(&self, name: &[::std::primitive::u8]) -> ::std::result::Result<::std::primitive::usize, ::fbthrift::ApplicationException> {
            match name {
                b"func" => ::std::result::Result::Ok(0usize),
                _ => ::std::result::Result::Err(::fbthrift::ApplicationException::unknown_method()),
            }
        }

        #[allow(clippy::match_single_binding)]
        async fn handle_method(
            &self,
            idx: ::std::primitive::usize,
            _p: &mut P::Deserializer,
            _r: &R,
            _seqid: ::std::primitive::u32,
        ) -> ::anyhow::Result<::fbthrift::ProtocolEncodedFinal<P>> {
            match idx {
                0usize => {
                    use const_cstr::const_cstr;
                    const_cstr! {
                        SERVICE_NAME = "Service";
                        METHOD_NAME = "Service.func";
                    }
                    let mut ctx_stack = _r.get_context_stack(
                        SERVICE_NAME.as_cstr(),
                        METHOD_NAME.as_cstr(),
                    )?;
                    let res = self.handle_func(_p, _r, &mut ctx_stack).await?;
                    let env = ::fbthrift::help::serialize_result_envelope::<P, R, _>(
                        "func",
                        METHOD_NAME.as_cstr(),
                        _seqid,
                        _r,
                        &mut ctx_stack,
                        res
                    )?;
                    Ok(env)
                }
                bad => panic!(
                    "{}: unexpected method idx {}",
                    "ServiceProcessor",
                    bad
                ),
            }
        }

        #[allow(clippy::match_single_binding)]
        #[inline]
        fn create_interaction_idx(&self, name: &str) -> ::anyhow::Result<::std::primitive::usize> {
            match name {
                _ => ::anyhow::bail!("Unknown interaction"),
            }
        }

        #[allow(clippy::match_single_binding)]
        fn handle_create_interaction(
            &self,
            idx: ::std::primitive::usize,
        ) -> ::anyhow::Result<
            ::std::sync::Arc<dyn ::fbthrift::ThriftService<P::Frame, Handler = (), RequestContext = Self::RequestContext> + ::std::marker::Send + 'static>
        > {
            match idx {
                bad => panic!(
                    "{}: unexpected method idx {}",
                    "ServiceProcessor",
                    bad
                ),
            }
        }
    }

    #[::async_trait::async_trait]
    impl<P, H, R> ::fbthrift::ThriftService<P::Frame> for ServiceProcessor<P, H, R>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        P::Frame: ::std::marker::Send + 'static,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = ::fbthrift::ProtocolDecoded<P>>
            + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        type Handler = H;
        type RequestContext = R;

        #[tracing::instrument(level="trace", skip_all, fields(service = "Service"))]
        async fn call(
            &self,
            req: ::fbthrift::ProtocolDecoded<P>,
            req_ctxt: &R,
        ) -> ::anyhow::Result<::fbthrift::ProtocolEncodedFinal<P>> {
            use ::fbthrift::{BufExt as _, ProtocolReader as _, ServiceProcessor as _};
            let mut p = P::deserializer(req);
            let (idx, mty, seqid) = p.read_message_begin(|name| self.method_idx(name))?;
            if mty != ::fbthrift::MessageType::Call {
                return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::InvalidMessageType,
                    format!("message type {:?} not handled", mty)
                )));
            }
            let idx = match idx {
                ::std::result::Result::Ok(idx) => idx,
                ::std::result::Result::Err(_) => {
                    let cur = P::into_buffer(p).reset();
                    return self.supa.call(cur, req_ctxt).await;
                }
            };
            let res = self.handle_method(idx, &mut p, req_ctxt, seqid).await?;
            p.read_message_end()?;

            Ok(res)
        }

        fn create_interaction(
            &self,
            name: &str,
        ) -> ::anyhow::Result<
            ::std::sync::Arc<dyn ::fbthrift::ThriftService<P::Frame, Handler = (), RequestContext = R> + ::std::marker::Send + 'static>
        > {
            use ::fbthrift::{ServiceProcessor as _};
            let idx = self.create_interaction_idx(name);
            let idx = match idx {
                ::anyhow::Result::Ok(idx) => idx,
                ::anyhow::Result::Err(_) => {
                    return self.supa.create_interaction(name);
                }
            };
            self.handle_create_interaction(idx)
        }
    }

    /// Construct a new instance of a Service service.
    ///
    /// This is called when a new instance of a Thrift service Processor
    /// is needed for a particular Thrift protocol.
    #[::tracing::instrument(level="debug", skip_all, fields(proto = ?proto))]
    pub fn make_Service_server<F, H, R>(
        proto: ::fbthrift::ProtocolID,
        handler: H,
    ) -> ::std::result::Result<::std::boxed::Box<dyn ::fbthrift::ThriftService<F, Handler = H, RequestContext = R> + ::std::marker::Send + 'static>, ::fbthrift::ApplicationException>
    where
        F: ::fbthrift::Framing + ::std::marker::Send + ::std::marker::Sync + 'static,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::std::ffi::CStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack<Name = R::Name, Buffer = F::DecBuf> + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        match proto {
            ::fbthrift::ProtocolID::BinaryProtocol => {
                ::std::result::Result::Ok(::std::boxed::Box::new(ServiceProcessor::<::fbthrift::BinaryProtocol<F>, H, R>::new(handler)))
            }
            ::fbthrift::ProtocolID::CompactProtocol => {
                ::std::result::Result::Ok(::std::boxed::Box::new(ServiceProcessor::<::fbthrift::CompactProtocol<F>, H, R>::new(handler)))
            }
            bad => {
                ::tracing::error!(method = "Service.", invalid_protocol = ?bad);
                ::std::result::Result::Err(::fbthrift::ApplicationException::invalid_protocol(bad))
            }
        }
    }
}

/// Client mocks. For every service, a struct mock::TheService that implements
/// client::TheService.
///
/// As an example of the generated API, for the following thrift service:
///
/// ```thrift
/// service MyService {
///     FunctionResponse myFunction(
///         1: FunctionRequest request,
///     ) throws {
///         1: StorageException s,
///         2: NotFoundException n,
///     ),
///
///     // other functions
/// }
/// ```
///
/// we would end up with this mock object under crate::mock::MyService:
///
/// ```
/// # const _: &str = stringify! {
/// impl crate::client::MyService for MyService<'mock> {...}
///
/// pub struct MyService<'mock> {
///     pub myFunction: myFunction<'mock>,
///     // ...
/// }
///
/// impl dyn crate::client::MyService {
///     pub fn mock<'mock>() -> MyService<'mock>;
/// }
///
/// impl myFunction<'mock> {
///     // directly return the given success response
///     pub fn ret(&self, value: FunctionResponse);
///
///     // invoke closure to compute success response
///     pub fn mock(
///         &self,
///         mock: impl FnMut(FunctionRequest) -> FunctionResponse + Send + Sync + 'mock,
///     );
///
///     // invoke closure to compute response
///     pub fn mock_result(
///         &self,
///         mock: impl FnMut(FunctionRequest) -> Result<FunctionResponse, crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock,
///     );
///
///     // return one of the function's declared exceptions
///     pub fn throw<E>(&self, exception: E)
///     where
///         E: Clone + Into<crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock;
/// }
///
/// impl From<StorageException> for MyFunctionExn {...}
/// impl From<NotFoundException> for MyFunctionExn {...}
/// # };
/// ```
///
/// The intended usage from a test would be:
///
/// ```
/// # const _: &str = stringify! {
/// use std::sync::Arc;
/// use thrift_if::client::MyService;
///
/// #[test]
/// fn test_my_client() {
///     let mock = Arc::new(<dyn MyService>::mock());
///
///     // directly return a success response
///     let resp = FunctionResponse {...};
///     mock.myFunction.ret(resp);
///
///     // or give a closure to compute the success response
///     mock.myFunction.mock(|request| FunctionResponse {...});
///
///     // or throw one of the function's exceptions
///     mock.myFunction.throw(StorageException::ItFailed);
///
///     // or compute a Result (useful if your exceptions aren't Clone)
///     mock.myFunction.mock_result(|request| Err(...));
///
///     let out = do_the_thing(mock).wait().unwrap();
///     assert!(out.what_i_expected());
/// }
///
/// fn do_the_thing(
///     client: Arc<dyn MyService + Send + Sync + 'static>,
/// ) -> impl Future<Item = Out> {...}
/// # };
/// ```
pub mod mock {
    pub struct Service<'mock> {
        pub func: r#impl::service::func<'mock>,
        _marker: ::std::marker::PhantomData<&'mock ()>,
    }

    impl dyn super::client::Service {
        pub fn mock<'mock>() -> Service<'mock> {
            Service {
                func: r#impl::service::func::unimplemented(),
                _marker: ::std::marker::PhantomData,
            }
        }
    }

    impl<'mock> super::client::Service for Service<'mock> {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &::std::primitive::str,
            arg_arg3: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            let mut closure = self.func.closure.lock().unwrap();
            let closure: &mut dyn ::std::ops::FnMut(crate::types::StringWithAdapter, ::std::string::String, crate::types::Foo) -> _ = &mut **closure;
            ::std::boxed::Box::pin(::futures::future::ready(closure(arg_arg1.to_owned(), arg_arg2.to_owned(), arg_arg3.clone())))
        }
    }

    mod r#impl {
        pub mod service {

            pub struct func<'mock> {
                pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                    dyn ::std::ops::FnMut(crate::types::StringWithAdapter, ::std::string::String, crate::types::Foo) -> ::std::result::Result<
                        crate::types::MyI32,
                        crate::errors::service::FuncError,
                    > + ::std::marker::Send + ::std::marker::Sync + 'mock,
                >>,
            }

            #[allow(clippy::redundant_closure)]
            impl<'mock> func<'mock> {
                pub fn unimplemented() -> Self {
                    Self {
                        closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: crate::types::StringWithAdapter, _: ::std::string::String, _: crate::types::Foo| panic!(
                            "{}::{} is not mocked",
                            "Service",
                            "func",
                        ))),
                    }
                }

                pub fn ret(&self, value: crate::types::MyI32) {
                    self.mock(move |_: crate::types::StringWithAdapter, _: ::std::string::String, _: crate::types::Foo| value.clone());
                }

                pub fn mock(&self, mut mock: impl ::std::ops::FnMut(crate::types::StringWithAdapter, ::std::string::String, crate::types::Foo) -> crate::types::MyI32 + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |arg1, arg2, arg3| ::std::result::Result::Ok(mock(arg1, arg2, arg3)));
                }

                pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(crate::types::StringWithAdapter, ::std::string::String, crate::types::Foo) -> ::std::result::Result<crate::types::MyI32, crate::errors::service::FuncError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |arg1, arg2, arg3| mock(arg1, arg2, arg3));
                }

                pub fn throw<E>(&self, exception: E)
                where
                    E: ::std::convert::Into<crate::errors::service::FuncError>,
                    E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
                {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |_: crate::types::StringWithAdapter, _: ::std::string::String, _: crate::types::Foo| ::std::result::Result::Err(exception.clone().into()));
                }
            }
        }
    }
}

/// Error return types.
pub mod errors {
    /// Errors for Service functions.
    pub mod service {

        pub type FuncError = ::fbthrift::NonthrowingFunctionError;

        impl ::std::convert::From<crate::services::service::FuncExn> for
            ::std::result::Result<crate::types::MyI32, FuncError>
        {
            fn from(e: crate::services::service::FuncExn) -> Self {
                match e {
                    crate::services::service::FuncExn::Success(res) =>
                        ::std::result::Result::Ok(res),
                    crate::services::service::FuncExn::ApplicationException(aexn) =>
                        ::std::result::Result::Err(FuncError::ApplicationException(aexn)),
                }
            }
        }

    }

}
